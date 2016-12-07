
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2015 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  |          ZhuZongXin <dreamsxin@qq.com>                                 |
  +------------------------------------------------------------------------+
*/


#ifndef PHALCON_KERNEL_TIME_H
#define PHALCON_KERNEL_TIME_H

#include <php.h>
#include <Zend/zend.h>

#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>

#define MICRO_IN_SEC 1000000.00

void phalcon_time(zval *return_value);
int phalcon_get_time();
#ifdef HAVE_GETTIMEOFDAY
void phalcon_microtime(zval *return_value, zval *get_as_float);
double phalcon_get_microtime();
#endif

long int phalcon_get_system_uptime();
long int phalcon_get_proc_starttime(unsigned int pid);

#endif /* PHALCON_KERNEL_TIME_H */
