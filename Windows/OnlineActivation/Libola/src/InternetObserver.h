/* Generated by Together */

#ifndef _AG_INTERNETOBSERVER_H_
#define _AG_INTERNETOBSERVER_H_

#include <windows.h>

namespace OnlineActivation
{

class InternetObserver
{
public:

	virtual void Update(DWORD dwStatus, LPVOID lpvInfo, DWORD dwInfoLen) = 0;

	virtual ~InternetObserver() {}
};

} // namespace OnlineActivation

#endif //_AG_INTERNETOBSERVER_H_