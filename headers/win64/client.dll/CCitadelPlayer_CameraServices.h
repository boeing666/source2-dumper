#pragma once

class CCitadelPlayer_CameraServices : public CPlayer_CameraServices /*0x0*/  // sizeof 0x3A8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x3A0]; // offset 0x0
    CHandle< C_PostProcessingVolume > m_hPrevPostProcessingVolume; // offset 0x3A0, size 0x4, align 4
    char _pad_03A4[0x4]; // offset 0x3A4
};
