#pragma once

enum EDOTADraftTriviaAnswerResult : uint32_t  // sizeof 0x4
{
    k_EDOTADraftTriviaAnswerResult_Success = 0,
    k_EDOTADraftTriviaAnswerResult_InvalidMatchID = 1,
    k_EDOTADraftTriviaAnswerResult_AlreadyAnswered = 2,
    k_EDOTADraftTriviaAnswerResult_InternalError = 3,
    k_EDOTADraftTriviaAnswerResult_TriviaDisabled = 4,
    k_EDOTADraftTriviaAnswerResult_GCDown = 5,
};
