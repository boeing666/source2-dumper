#pragma once

enum ECitadelStatusImpact : uint32_t  // sizeof 0x4
{
    None = 0,
    Stunned = 1,
    Cursed = 2,
    Asleep = 4,
    Silenced = 8,
    Disarmed = 16,
    Immobolized = 32,
};
