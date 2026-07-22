#pragma once

class CCSWeaponBaseGun : public CCSWeaponBase /*0x0*/  // sizeof 0x1340, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1318]; // offset 0x0
    int32 m_zoomLevel; // offset 0x1318, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x131C, size 0x4, align 4
    char _pad_1320[0x8]; // offset 0x1320
    int32 m_silencedModelIndex; // offset 0x1328, size 0x4, align 4
    bool m_inPrecache; // offset 0x132C, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x132D, size 0x1, align 1
    char _pad_132E[0x2]; // offset 0x132E
    int32 m_nRevolverCylinderIdx; // offset 0x1330, size 0x4, align 4
    bool m_bSkillReloadAvailable; // offset 0x1334, size 0x1, align 1
    bool m_bSkillReloadLiftedReloadKey; // offset 0x1335, size 0x1, align 1
    bool m_bSkillBoltInterruptAvailable; // offset 0x1336, size 0x1, align 1
    bool m_bSkillBoltLiftedFireKey; // offset 0x1337, size 0x1, align 1
    char _pad_1338[0x8]; // offset 0x1338
};
