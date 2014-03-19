//   Copyright 2012 Square Inc.
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//


#ifndef SocketRocket_base64_h
#define SocketRocket_base64_h

#include <sys/types.h>

/*
 Changed from int to size_t so that we don't lose precision when returning the result. Since
 targsize is size_t, size_t should also be the max number of numbers that can be copied
 */
extern size_t
b64_ntop(u_char const *src,
         size_t srclength,
         char *target,
         size_t targsize,
         int *error); //new error argument added here so that we can detect an overflow and handle it accordingly

extern int
b64_pton(char const *src,
         u_char *target, 
         size_t targsize);


#endif
