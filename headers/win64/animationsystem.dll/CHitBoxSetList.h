#pragma once

class CHitBoxSetList  // sizeof 0x18, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CHitBoxSet > m_HitBoxSets; // offset 0x0, size 0x18, align 8
};
