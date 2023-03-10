/*
  +----------------------------------------------------------------------+
  | Yet Another Framework                                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Xinchen Hui  <laruence@php.net>                              |
  +----------------------------------------------------------------------+
*/

#ifndef YAF_NAMESPACE_H
#define YAF_NAMESPACE_H

#define namespace_switch(n) \
	((yaf_is_use_namespace())? n##_ns : n)

#define YAF_INIT_CLASS_ENTRY(ce, name, name_ns, methods) \
	if (yaf_is_use_namespace()) { \
		INIT_CLASS_ENTRY(ce, name_ns, methods); \
	} else { \
		INIT_CLASS_ENTRY(ce, name, methods); \
	}

#endif	/* PHP_YAF_H */

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
