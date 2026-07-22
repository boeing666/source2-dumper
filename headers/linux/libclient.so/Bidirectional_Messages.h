#pragma once

enum Bidirectional_Messages : uint32_t  // sizeof 0x4
{
    bi_RebroadcastGameEvent = 16,
    bi_RebroadcastSource = 17,
    bi_GameEvent_DEPRECATED = 18,
    bi_PredictionEvent = 19,
};
