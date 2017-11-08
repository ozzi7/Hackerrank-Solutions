% Enter your code here. Read input from STDIN. Print output to STDOUT
% Your class should be named solution

-module(solution).
-export([main/0]).

main() -> io:format("~p~n",[sumOdds(arrayBuilder(),0)]).

arrayBuilder()->arrayBuilder([]).
arrayBuilder(Array)->
    try io:fread("","~d") of
        {ok,[Number]}->arrayBuilder([Array|[Number]]);
        _->lists:flatten(Array)
    catch
        _->lists:flatten(Array)
    end.

sumOdds([T], Acc) ->     
    if T rem 2 /= 0 ->
            Acc+T;
    true -> Acc
    end;
sumOdds([T|Array],Acc) ->
    if T rem 2 /= 0 ->
            sumOdds(Array,Acc+T);
    true -> sumOdds(Array,Acc)
    end.