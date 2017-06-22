#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <mysql/mysql.h>
#include "cgic.h"
char * headname = "head.html";
char * footname = "footer.html";
char * tealogin = "index_t.html";


int cgiMain()
{
	FILE * fd;
	fprintf(cgiOut, "Content-type:text/html;charset=utf-8\n\n");
/*	fprintf(cgiOut, "<head><meta charset=\"utf-8\"/><title>查询结果</title>\
			<style>table {width:400px; margin: 50px auto; border: 1px solid gray; border-collapse: collapse; border-spacing: none; text-align:center;}\
			tr,td,th{border: 1px solid gray;}\
			</style>\
			</head>");*/

	fprintf(cgiOut, "<head><meta charset=\"utf-8\"><title>查询结果</title>\
		    <link rel=\"stylesheet\" href=\"/stu/public/css/bootstrap.min.css\">\
		</head>");

	char tuser[32] = "\0";
	char tpwd[32] = "\0";
	int status = 0;
	char ch;

	status = cgiFormString("tuser",  tuser, 32);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get tuser error!\n");
		return 1;
	}
	status = cgiFormString("tpwd",  tuser, 32);
	if (status != cgiFormSuccess)
	{
		fprintf(cgiOut, "get tpwd error!\n");
		return 1;
	}
	int ret;
	MYSQL *db;
	char sql[128] = "\0";

		sprintf(sql, "select * from teacher where tuser = '%s'and tpwd='%s'", tuser,tpwd);



	//初始化
	db = mysql_init(NULL);
	if (db == NULL)
	{
		fprintf(cgiOut,"mysql_init fail:%s\n", mysql_error(db));
		return -1;
	}

	//连接数据库
	db = mysql_real_connect(db, "127.0.0.1", "root", "1", "stu",  3306, NULL, 0);
	if (db == NULL)
	{
		fprintf(cgiOut,"mysql_real_connect fail:%s\n", mysql_error(db));
		mysql_close(db);
		return -1;
	}

	if ((ret = mysql_real_query(db, sql, strlen(sql) + 1)) != 0)
	{
		fprintf(cgiOut,"mysql_real_query fail:%s\n", mysql_error(db));
		mysql_close(db);
		return -1;
	}

	MYSQL_RES *res;
	res = mysql_store_result(db);
	if (res == NULL)
	{
		fprintf(cgiOut,"mysql_store_result fail:%s\n", mysql_error(db));
		return -1;
	}

	int num=(int)res->row_count;
	if(num){
		if(!(fd = fopen(tealogin, "r"))){
			fprintf(cgiOut, "Cannot open file, %s\n", tealogin);
			return -1;
		}
		ch = fgetc(fd);

		while(ch != EOF){
			fprintf(cgiOut, "%c", ch);
			ch = fgetc(fd);
		}
	}else{
		if(!(fd = fopen(headname, "r"))){
			fprintf(cgiOut, "Cannot open file, %s\n", headname);
			return -1;
		}
		ch = fgetc(fd);

		while(ch != EOF){
			fprintf(cgiOut, "%c", ch);
			ch = fgetc(fd);
		}
		fprintf(cgiOut, "该教师不存在！");
	}
	mysql_close(db);
	return 0;
}
