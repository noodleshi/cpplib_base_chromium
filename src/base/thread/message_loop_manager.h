#include <memory>
#include <unordered_map>

#include "src/base/base_export.h"
#include "src/base/macros.h"
#include "src/base/singleton.h"

namespace base {

class MessageLoop;

class BASE_EXPORT MessageLoopManager {
 public:
  MessageLoopManager() {}
  ~MessageLoopManager() {}

	// Get thread object by thread number
  MessageLoop* GetMessageLoop(uint64_t thread_id);
  void RegisterMessageLoop(MessageLoop* message_loop);
  void UnRegisterMessageLoop(uint64_t thread_id);

 private:
  
  std::unordered_map<uint64_t, MessageLoop*> loop_hashmap_;
  std::mutex loop_hashmap_mutex_;

  DISALLOW_COPY_AND_ASSIGN(MessageLoopManager);
};

typedef Singleton<MessageLoopManager> MessageLoopManagerSingleton;

}  // namespace base
