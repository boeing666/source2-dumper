#pragma once

class CCSObserver_CameraServices : public CCSPlayerBase_CameraServices /*0x0*/  // sizeof 0x2B0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2A8]; // offset 0x0
    CHandle< C_PostProcessingVolume > m_hPrevPostProcessingVolume; // offset 0x2A8, size 0x4, align 4
    char _pad_02AC[0x4]; // offset 0x2AC
};
