#pragma once

class C_CSWeaponBaseGun : public C_CSWeaponBase /*0x0*/  // sizeof 0x1F50, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F20]; // offset 0x0
    int32 m_zoomLevel; // offset 0x1F20, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x1F24, size 0x4, align 4
    int32 m_iSilencerBodygroup; // offset 0x1F28, size 0x4, align 4
    char _pad_1F2C[0xC]; // offset 0x1F2C
    int32 m_silencedModelIndex; // offset 0x1F38, size 0x4, align 4
    bool m_inPrecache; // offset 0x1F3C, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x1F3D, size 0x1, align 1
    char _pad_1F3E[0x2]; // offset 0x1F3E
    int32 m_nRevolverCylinderIdx; // offset 0x1F40, size 0x4, align 4
    char _pad_1F44[0xC]; // offset 0x1F44
};
