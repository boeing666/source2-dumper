#pragma once

class CDOTA_BaseNPC_HoldoutTower : public CDOTA_BaseNPC_Tower /*0x0*/  // sizeof 0x19F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x19E8]; // offset 0x0
    DOTA_HOLDOUT_TOWER_TYPE m_iTowerType; // offset 0x19E8, size 0x4, align 4
    char _pad_19EC[0x4]; // offset 0x19EC
};
