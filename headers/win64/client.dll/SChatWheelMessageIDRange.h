#pragma once

class SChatWheelMessageIDRange  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    ChatWheelMessageID_t unStartMessageID; // offset 0x0, size 0x4, align 255
    ChatWheelMessageID_t unEndMessageID; // offset 0x4, size 0x4, align 255
};
