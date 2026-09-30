#pragma once

class CCitadel_Modifier_HideoutIntroVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CameraEntityOverride_t m_preIntroCamera; // offset 0x760, size 0x10, align 8
    CameraEntityOverride_t m_introCamera; // offset 0x770, size 0x10, align 8
};
