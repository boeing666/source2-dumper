#pragma once

class CCSWeaponBaseGun : public CCSWeaponBase /*0x0*/  // sizeof 0x1070, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1050]; // offset 0x0
    int32 m_zoomLevel; // offset 0x1050, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x1054, size 0x4, align 4
    char _pad_1058[0x8]; // offset 0x1058
    int32 m_silencedModelIndex; // offset 0x1060, size 0x4, align 4
    bool m_inPrecache; // offset 0x1064, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x1065, size 0x1, align 1
    char _pad_1066[0x2]; // offset 0x1066
    int32 m_nRevolverCylinderIdx; // offset 0x1068, size 0x4, align 4
    bool m_bSkillReloadAvailable; // offset 0x106C, size 0x1, align 1
    bool m_bSkillReloadLiftedReloadKey; // offset 0x106D, size 0x1, align 1
    bool m_bSkillBoltInterruptAvailable; // offset 0x106E, size 0x1, align 1
    bool m_bSkillBoltLiftedFireKey; // offset 0x106F, size 0x1, align 1
};
