#pragma once

class CCSWeaponBaseGun : public CCSWeaponBase /*0x0*/  // sizeof 0x12A0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1280]; // offset 0x0
    int32 m_zoomLevel; // offset 0x1280, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x1284, size 0x4, align 4
    char _pad_1288[0x8]; // offset 0x1288
    int32 m_silencedModelIndex; // offset 0x1290, size 0x4, align 4
    bool m_inPrecache; // offset 0x1294, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x1295, size 0x1, align 1
    char _pad_1296[0x2]; // offset 0x1296
    int32 m_nRevolverCylinderIdx; // offset 0x1298, size 0x4, align 4
    bool m_bSkillReloadAvailable; // offset 0x129C, size 0x1, align 1
    bool m_bSkillReloadLiftedReloadKey; // offset 0x129D, size 0x1, align 1
    bool m_bSkillBoltInterruptAvailable; // offset 0x129E, size 0x1, align 1
    bool m_bSkillBoltLiftedFireKey; // offset 0x129F, size 0x1, align 1
};
