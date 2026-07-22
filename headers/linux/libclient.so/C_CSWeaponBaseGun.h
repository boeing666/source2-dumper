#pragma once

class C_CSWeaponBaseGun : public C_CSWeaponBase /*0x0*/  // sizeof 0x2B90, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x2B68]; // offset 0x0
    int32 m_zoomLevel; // offset 0x2B68, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x2B6C, size 0x4, align 4
    int32 m_iSilencerBodygroup; // offset 0x2B70, size 0x4, align 4
    char _pad_2B74[0xC]; // offset 0x2B74
    int32 m_silencedModelIndex; // offset 0x2B80, size 0x4, align 4
    bool m_inPrecache; // offset 0x2B84, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x2B85, size 0x1, align 1
    char _pad_2B86[0x2]; // offset 0x2B86
    int32 m_nRevolverCylinderIdx; // offset 0x2B88, size 0x4, align 4
    char _pad_2B8C[0x4]; // offset 0x2B8C
};
