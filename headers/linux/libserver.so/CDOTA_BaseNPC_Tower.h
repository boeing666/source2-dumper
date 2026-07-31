#pragma once

class CDOTA_BaseNPC_Tower : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1CC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1CA0]; // offset 0x0
    CEntityIOOutput m_OnTowerKilled; // offset 0x1CA0, size 0x18, align 255
    CHandle< CBaseEntity > m_hTowerAttackTarget; // offset 0x1CB8, size 0x4, align 4
    CHandle< CBaseEntity > m_hTowerHighFiveTarget; // offset 0x1CBC, size 0x4, align 4
    char _pad_1CC0[0x8]; // offset 0x1CC0
};
