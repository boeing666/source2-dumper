#pragma once

class CCitadel_Upgrade_StabilizingTripod : public CCitadel_Item /*0x0*/  // sizeof 0x13A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecDeployedSentries; // offset 0xF78, size 0x18, align 8
    Vector m_vDeployPosition; // offset 0xF90, size 0xC, align 4
    QAngle m_vDeployAngles; // offset 0xF9C, size 0xC, align 4
    char _pad_0FA8[0x400]; // offset 0xFA8
};
