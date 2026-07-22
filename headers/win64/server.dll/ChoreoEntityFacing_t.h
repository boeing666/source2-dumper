#pragma once

struct ChoreoEntityFacing_t  // sizeof 0x14, align 0xFF [trivial_dtor] (server)
{
    SceneEventId_t m_nSceneEventId; // offset 0x0, size 0x4, align 255
    VectorWS m_vFacingTarget; // offset 0x4, size 0xC, align 4
    float32 m_flImportance; // offset 0x10, size 0x4, align 4
};
