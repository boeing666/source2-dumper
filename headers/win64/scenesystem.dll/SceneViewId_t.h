#pragma once

struct SceneViewId_t  // sizeof 0x10, align 0x8 [trivial_ctor trivial_dtor] (scenesystem) {MGetKV3ClassDefaults}
{
    uint64 m_nViewId; // offset 0x0, size 0x8, align 8
    uint64 m_nFrameCount; // offset 0x8, size 0x8, align 8
};
