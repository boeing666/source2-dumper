#pragma once

class C_DOTA_BaseNPC_HoldoutTower : public C_DOTA_BaseNPC_Tower /*0x0*/  // sizeof 0x1C18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1C10]; // offset 0x0
    DOTA_HOLDOUT_TOWER_TYPE m_iTowerType; // offset 0x1C10, size 0x4, align 4
    char _pad_1C14[0x4]; // offset 0x1C14
};
