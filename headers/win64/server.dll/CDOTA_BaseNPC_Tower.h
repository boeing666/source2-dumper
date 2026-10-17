#pragma once

class CDOTA_BaseNPC_Tower : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1AD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1AB0]; // offset 0x0
    CEntityIOOutput m_OnTowerKilled; // offset 0x1AB0, size 0x18, align 255
    CHandle< CBaseEntity > m_hTowerAttackTarget; // offset 0x1AC8, size 0x4, align 4
    CHandle< CBaseEntity > m_hTowerHighFiveTarget; // offset 0x1ACC, size 0x4, align 4
    char _pad_1AD0[0x8]; // offset 0x1AD0
};
