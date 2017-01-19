
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
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
  +------------------------------------------------------------------------+
*/

#ifndef PHALCON_CACHE_BACKENDINTERFACE_H
#define PHALCON_CACHE_BACKENDINTERFACE_H

#include "php_phalcon.h"

extern zend_class_entry *phalcon_cache_backendinterface_ce;

PHALCON_INIT_CLASS(Phalcon_Cache_BackendInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backendinterface_start, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, keyName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, lifetime, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backendinterface_stop, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, stopBuffer, _IS_BOOL, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backendinterface_setlastkey, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, lastKey, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backendinterface_get, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, keyName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backendinterface_save, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, keyName, IS_STRING, 1)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_TYPE_INFO(0, lifetime, IS_LONG, 1)
	ZEND_ARG_TYPE_INFO(0, stopBuffer, _IS_BOOL, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backendinterface_delete, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, keyName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backendinterface_querykeys, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, lifetime, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backendinterface_exists, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, keyName, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, lifetime, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backendinterface_increment, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, keyName, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_cache_backendinterface_decrement, 0, 0, 0)
	ZEND_ARG_TYPE_INFO(0, keyName, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 1)
ZEND_END_ARG_INFO()

#endif /* PHALCON_CACHE_BACKENDINTERFACE_H */
