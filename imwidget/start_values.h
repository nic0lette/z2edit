#ifndef Z2UTIL_IMWIDGET_STARTUP_H
#define Z2UTIL_IMWIDGET_STARTUP_H
#include "nes/mapper.h"

namespace z2util {

class StartValues {
  public:
    StartValues();
    void Draw();

    inline bool* visible() { return &visible_; }
    inline void set_mapper(Mapper* m) { mapper_ = m; }
  private:
    void Unpack();
    void Pack();
    bool visible_;
    Mapper* mapper_;

    struct Unpacked {
        int atklvl;
        int maglvl;
        int lifelvl;

        bool shield;
        bool jump;
        bool life;
        bool fairy;
        bool fire;
        bool reflex;
        bool spell;
        bool thunder;
        int magic;
        int heart;
        bool candle;
        bool glove;
        bool raft;
        bool boots;
        bool flute;
        bool cross;
        bool hammer;
        bool key;
        int crystals;
        bool downstab;
        bool upstab;
        int lives;
    };
    Unpacked data_;
};

}  // namespace z2util
#endif // Z2UTIL_IMWIDGET_STARTUP_H
