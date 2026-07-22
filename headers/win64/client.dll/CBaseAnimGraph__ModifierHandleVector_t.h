#pragma once

struct CBaseAnimGraph::ModifierHandleVector_t  // sizeof 0x18, align 0xFF (client)
{
    CUtlVector< CModifierHandleBase > m_ModifierHandles; // offset 0x0, size 0x18, align 8
};
