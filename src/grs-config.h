#pragma once

#define UCFG_DEFINE_NDEBUG 0

#define BUILD_DESC "v2.11.0"

#include <vc-inc.h>


#pragma warning(disable: 4018 4101 4242 4244 4267 4290 4717 4800)

#define WIN32

#define _CRT_SECURE_NO_DEPRECATE 1
#define _SCL_SECURE_NO_WARNINGS

#define HAVE_DECL_HTOBE16 1
#define HAVE_DECL_HTOLE16 1
#define HAVE_DECL_BE16TOH 1
#define HAVE_DECL_LE16TOH 1
#define HAVE_DECL_HTOLE32 1
#define HAVE_DECL_BE32TOH 1
#define HAVE_DECL_LE32TOH 1
#define HAVE_DECL_HTOBE64 1
#define HAVE_DECL_HTOLE64 1
#define HAVE_DECL_BE64TOH 1
#define HAVE_DECL_LE64TOH 1

#define HAVE_WORKING_BOOST_SLEEP_FOR 1

#define BOOST_ASIO_ERROR_CATEGORY_NOEXCEPT noexcept

#define QT_STATIC
#define MINIUPNP_STATICLIB

#define ENABLE_WALLET
#define USE_QRCODE
#define USE_UPNP 1


