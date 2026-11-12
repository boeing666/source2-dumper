#pragma once

class C_CSWeaponBaseGun : public C_CSWeaponBase /*0x0*/  // sizeof 0x1F90, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1F60]; // offset 0x0
    int32 m_zoomLevel; // offset 0x1F60, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x1F64, size 0x4, align 4
    int32 m_iSilencerBodygroup; // offset 0x1F68, size 0x4, align 4
    char _pad_1F6C[0xC]; // offset 0x1F6C
    int32 m_silencedModelIndex; // offset 0x1F78, size 0x4, align 4
    bool m_inPrecache; // offset 0x1F7C, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x1F7D, size 0x1, align 1
    char _pad_1F7E[0x2]; // offset 0x1F7E
    int32 m_nRevolverCylinderIdx; // offset 0x1F80, size 0x4, align 4
    char _pad_1F84[0xC]; // offset 0x1F84
};
