#pragma once

#include "aidl/android/system/keystore2/IKeystoreSecurityLevel.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace system {
namespace keystore2 {
class BnKeystoreSecurityLevel : public ::ndk::BnCInterface<IKeystoreSecurityLevel> {
public:
  BnKeystoreSecurityLevel();
  virtual ~BnKeystoreSecurityLevel();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
}  // namespace keystore2
}  // namespace system
}  // namespace android
}  // namespace aidl
