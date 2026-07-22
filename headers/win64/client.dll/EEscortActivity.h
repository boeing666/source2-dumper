#pragma once

enum EEscortActivity : uint32_t  // sizeof 0x4
{
    IdleShielded = 0,
    Alert = 1,
    RangeAttack = 2,
    Dying = 3,
};
