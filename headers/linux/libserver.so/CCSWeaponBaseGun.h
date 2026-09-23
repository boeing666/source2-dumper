#pragma once

class CCSWeaponBaseGun : public CCSWeaponBase /*0x0*/  // sizeof 0x1570, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1548]; // offset 0x0
    int32 m_zoomLevel; // offset 0x1548, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x154C, size 0x4, align 4
    char _pad_1550[0x8]; // offset 0x1550
    int32 m_silencedModelIndex; // offset 0x1558, size 0x4, align 4
    bool m_inPrecache; // offset 0x155C, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x155D, size 0x1, align 1
    char _pad_155E[0x2]; // offset 0x155E
    int32 m_nRevolverCylinderIdx; // offset 0x1560, size 0x4, align 4
    bool m_bSkillReloadAvailable; // offset 0x1564, size 0x1, align 1
    bool m_bSkillReloadLiftedReloadKey; // offset 0x1565, size 0x1, align 1
    bool m_bSkillBoltInterruptAvailable; // offset 0x1566, size 0x1, align 1
    bool m_bSkillBoltLiftedFireKey; // offset 0x1567, size 0x1, align 1
    char _pad_1568[0x8]; // offset 0x1568
};
