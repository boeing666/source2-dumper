#pragma once

class C_CSWeaponBaseGun : public C_CSWeaponBase /*0x0*/  // sizeof 0x1D10, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1CE0]; // offset 0x0
    int32 m_zoomLevel; // offset 0x1CE0, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x1CE4, size 0x4, align 4
    int32 m_iSilencerBodygroup; // offset 0x1CE8, size 0x4, align 4
    char _pad_1CEC[0xC]; // offset 0x1CEC
    int32 m_silencedModelIndex; // offset 0x1CF8, size 0x4, align 4
    bool m_inPrecache; // offset 0x1CFC, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x1CFD, size 0x1, align 1
    char _pad_1CFE[0x2]; // offset 0x1CFE
    int32 m_nRevolverCylinderIdx; // offset 0x1D00, size 0x4, align 4
    char _pad_1D04[0xC]; // offset 0x1D04
};
