/* <!-- copyright */
/*
 * aria2 - a simple utility for downloading files faster
 *
 * Copyright (C) 2006 Tatsuhiro Tsujikawa
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
/* copyright --> */
#ifndef _D_EXCEPTION_H_
#define _D_EXCEPTION_H_

#include "common.h"
#include <string>
#include <stdio.h>
#include <stdarg.h>

using namespace std;

class Exception {
private:
  string msg;
protected:
  void setMsg(string msgsrc, va_list ap) {
    char buf[256];
    vsnprintf(buf, sizeof(buf), msgsrc.c_str(), ap);
    msg = buf;
  }
public:
  Exception() {}
  virtual ~Exception() {}
  string getMsg() { return msg; }
};

#endif // _D_EXCEPTION_H_
