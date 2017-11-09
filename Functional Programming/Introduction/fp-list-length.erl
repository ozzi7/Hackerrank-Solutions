% Enter your code here. Read input from STDIN. Print output to STDOUT
% Your class should be named solution

-module(solution).
-export([main/0]).

main() ->io:format("~p~n",[arrayLength(arrayBuilder(),0)]).

arrayBuilder()->arrayBuilder([]).
arrayBuilder(Array)->
    try io:fread("","~d") of
        {ok,[Number]}->arrayBuilder([Array|[Number]]);
        _->lists:flatten(Array)
    catch
        _->lists:flatten(Array)
    end.

arrayLength([_|[]],Acc) ->     
    Acc+1;
arrayLength([_|Array],Acc) ->
    arrayLength(Array,Acc+1).