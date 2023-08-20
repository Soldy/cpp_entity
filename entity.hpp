#include <cstdint>

namespace cpp_entity{
enum Classifications {
   principle,
   ally,
   freindly,
   neutral,
   bugy,
   hostile,
   target
};
enum Behaviors {
   avoidable,
   passive,
   suspicious, // can be freindly
   unknown, // always bugy
   dangerous,
   aggressive
};
struct Entity {
  private:
     std::int16_t priority;
     cpp_entity::Classifications classification;
     cpp_entity::Behaviors behavior;

};
}
