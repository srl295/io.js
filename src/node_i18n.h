#ifndef SRC_NODE_I18N_H_
#define SRC_NODE_I18N_H_

#ifndef NODE_SPECIAL_ICU_DIR
#define NODE_SPECIAL_ICU_DIR ".node-icu"
#endif

#if defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS

#include "node.h"

#if defined(NODE_HAVE_I18N_SUPPORT)

namespace node {

extern bool flag_icu_data_dir;

namespace i18n {

bool InitializeICUDirectory(const char* icu_data_path, const char *argv0);

int32_t ToASCII(MaybeStackBuffer<char>* buf,
                const char* input,
                size_t length);
int32_t ToUnicode(MaybeStackBuffer<char>* buf,
                  const char* input,
                  size_t length);

}  // namespace i18n
}  // namespace node

#endif  // NODE_HAVE_I18N_SUPPORT

#endif  // defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS

#endif  // SRC_NODE_I18N_H_
