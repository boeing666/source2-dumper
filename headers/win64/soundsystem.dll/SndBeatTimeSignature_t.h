#pragma once

struct SndBeatTimeSignature_t  // sizeof 0x2, align 0x1 [trivial_dtor] (soundsystem) {MGetKV3ClassDefaults}
{
    uint8 nNumerator; // offset 0x0, size 0x1, align 1 | MPropertyFriendlyName
    uint8 nDenominator; // offset 0x1, size 0x1, align 1 | MPropertyFriendlyName
};
