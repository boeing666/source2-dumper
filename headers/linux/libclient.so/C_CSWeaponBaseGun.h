#pragma once

class C_CSWeaponBaseGun : public C_CSWeaponBase /*0x0*/  // sizeof 0x2E10, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x2DE8]; // offset 0x0
    int32 m_zoomLevel; // offset 0x2DE8, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x2DEC, size 0x4, align 4
    int32 m_iSilencerBodygroup; // offset 0x2DF0, size 0x4, align 4
    char _pad_2DF4[0xC]; // offset 0x2DF4
    int32 m_silencedModelIndex; // offset 0x2E00, size 0x4, align 4
    bool m_inPrecache; // offset 0x2E04, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x2E05, size 0x1, align 1
    char _pad_2E06[0x2]; // offset 0x2E06
    int32 m_nRevolverCylinderIdx; // offset 0x2E08, size 0x4, align 4
    char _pad_2E0C[0x4]; // offset 0x2E0C
};
