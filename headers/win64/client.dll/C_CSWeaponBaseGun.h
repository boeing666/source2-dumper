#pragma once

class C_CSWeaponBaseGun : public C_CSWeaponBase /*0x0*/  // sizeof 0x1F40, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F10]; // offset 0x0
    int32 m_zoomLevel; // offset 0x1F10, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x1F14, size 0x4, align 4
    int32 m_iSilencerBodygroup; // offset 0x1F18, size 0x4, align 4
    char _pad_1F1C[0xC]; // offset 0x1F1C
    int32 m_silencedModelIndex; // offset 0x1F28, size 0x4, align 4
    bool m_inPrecache; // offset 0x1F2C, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x1F2D, size 0x1, align 1
    char _pad_1F2E[0x2]; // offset 0x1F2E
    int32 m_nRevolverCylinderIdx; // offset 0x1F30, size 0x4, align 4
    char _pad_1F34[0xC]; // offset 0x1F34
};
