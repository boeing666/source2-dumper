#pragma once

enum EDestructiblePartDamagePassThroughType : uint32_t  // sizeof 0x4
{
    Normal = 0,
    Absorb = 1,
    InvincibleAbsorb = 2,
    InvinciblePassthrough = 3,
};
