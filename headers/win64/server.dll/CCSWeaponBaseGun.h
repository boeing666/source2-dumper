#pragma once

class CCSWeaponBaseGun : public CCSWeaponBase /*0x0*/  // sizeof 0x1290, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1270]; // offset 0x0
    int32 m_zoomLevel; // offset 0x1270, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x1274, size 0x4, align 4
    char _pad_1278[0x8]; // offset 0x1278
    int32 m_silencedModelIndex; // offset 0x1280, size 0x4, align 4
    bool m_inPrecache; // offset 0x1284, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x1285, size 0x1, align 1
    char _pad_1286[0x2]; // offset 0x1286
    int32 m_nRevolverCylinderIdx; // offset 0x1288, size 0x4, align 4
    bool m_bSkillReloadAvailable; // offset 0x128C, size 0x1, align 1
    bool m_bSkillReloadLiftedReloadKey; // offset 0x128D, size 0x1, align 1
    bool m_bSkillBoltInterruptAvailable; // offset 0x128E, size 0x1, align 1
    bool m_bSkillBoltLiftedFireKey; // offset 0x128F, size 0x1, align 1
};
