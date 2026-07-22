#pragma once

class CDOTA_BaseNPC_Tower : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x19E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x19B8]; // offset 0x0
    CEntityIOOutput m_OnTowerKilled; // offset 0x19B8, size 0x18, align 255
    CHandle< CBaseEntity > m_hTowerAttackTarget; // offset 0x19D0, size 0x4, align 4
    CHandle< CBaseEntity > m_hTowerHighFiveTarget; // offset 0x19D4, size 0x4, align 4
    char _pad_19D8[0x8]; // offset 0x19D8
};
