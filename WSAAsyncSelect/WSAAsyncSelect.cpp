// WSAAsyncSelect.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<WinSock2.h>

#pragma comment(lib,"ws2_32.lib")
using namespace std;

#define BACKLOG 10 //指定连接队列的最大长度
#define MAXDATASIZE 100 //指定数据缓冲区的最大长度
#define WM_SOCKET (WM_USER + 1) //定义Socket网络事件设置用户消息值

// 定义套接字信息
typedef   struct   _SOCKET_INFORMATION {
	CHAR   Buffer[MAXDATASIZE];        // 发送和接收数据的缓冲区
	WSABUF   DataBuf;                        // 定义发送和接收数据缓冲区的结构体，包括缓冲区的长度和内容
	SOCKET   Socket;                            // 与客户端进行通信的套接字
	DWORD   BytesSEND;                    // 保存套接字发送的字节数
	DWORD   BytesRECV;                    // 保存套接字接收的字节数
} SOCKET_INFORMATION, * LPSOCKET_INFORMATION;


SOCKET Accept; //与客户端通信的socket
LPSOCKET_INFORMATION


int main()
{
	
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
