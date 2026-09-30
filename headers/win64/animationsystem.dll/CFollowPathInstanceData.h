#pragma once

class CFollowPathInstanceData  // sizeof 0x24, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CRelativeArray< CMotionTransform > m_xLastPredictedTransformsDeltas; // offset 0x0, size 0x8, align 4
    float32 m_dampedTurnValue; // offset 0x8, size 0x4, align 4
    float32 m_flTurnAmount; // offset 0xC, size 0x4, align 4
    CAnimNetVar< float32 > m_flPredictionScale; // offset 0x10, size 0xC, align 4
    float32 m_flLastPathTime; // offset 0x1C, size 0x4, align 4
    char _pad_0020[0x4]; // offset 0x20
};
