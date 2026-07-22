#pragma once

class CMotionSearchDB  // sizeof 0xB8, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CMotionSearchNode m_rootNode; // offset 0x0, size 0x80, align 8
    CProductQuantizer m_residualQuantizer; // offset 0x80, size 0x20, align 8
    CUtlVector< MotionDBIndex > m_codeIndices; // offset 0xA0, size 0x18, align 8
};
