#pragma once

enum EMidBossActivity : uint32_t  // sizeof 0x4
{
    IdleShielded = 0,
    Alert = 1,
    AlertShooting = 2,
    Dying = 3,
};
