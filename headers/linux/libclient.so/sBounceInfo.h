#pragma once

class sBounceInfo  // sizeof 0x20, align 0xFF (client)
{
public:
    AttackRecord_t iAttackIndex; // offset 0x0, size 0x2, align 255
    char _pad_0002[0x2]; // offset 0x2
    int32 iBounceCount; // offset 0x4, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList; // offset 0x8, size 0x18, align 8
};
