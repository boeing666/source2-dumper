#pragma once

struct vphysics_save_cphysicsbody_t : public RnBodyDesc_t /*0x0*/  // sizeof 0xE8, align 0x8 (vphysics2) {MGetKV3ClassDefaults}
{
    char _pad_0000[0xE0]; // offset 0x0
    uint64 m_nOldPointer; // offset 0xE0, size 0x8, align 8
};
