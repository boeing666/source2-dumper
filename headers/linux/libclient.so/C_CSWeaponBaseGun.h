#pragma once

class C_CSWeaponBaseGun : public C_CSWeaponBase /*0x0*/  // sizeof 0x2DD0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x2DA8]; // offset 0x0
    int32 m_zoomLevel; // offset 0x2DA8, size 0x4, align 4
    int32 m_iBurstShotsRemaining; // offset 0x2DAC, size 0x4, align 4
    int32 m_iSilencerBodygroup; // offset 0x2DB0, size 0x4, align 4
    char _pad_2DB4[0xC]; // offset 0x2DB4
    int32 m_silencedModelIndex; // offset 0x2DC0, size 0x4, align 4
    bool m_inPrecache; // offset 0x2DC4, size 0x1, align 1
    bool m_bNeedsBoltAction; // offset 0x2DC5, size 0x1, align 1
    char _pad_2DC6[0x2]; // offset 0x2DC6
    int32 m_nRevolverCylinderIdx; // offset 0x2DC8, size 0x4, align 4
    char _pad_2DCC[0x4]; // offset 0x2DCC
};
